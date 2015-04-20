typedef struct Block {
    struct Block *left, *right;	/* left and right child in tree */
    Code *first, *last;		/* first and last code in block */
    struct Block *next;		/* next block */
    struct Block **follow;	/* following blocks */
    uint16_t nfollow;		/* # following blocks */
    CodeSize size;		/* size of block */
} Block;

Block *block_function	(CodeFunction*);