

struct box
{
int length,width,height;
}boxes;

typedef struct box box;

int get_volume(box b) {
  /**
   * Return the volume of the box
   */ return b.width * b.length * b.height;
}

int is_lower_than_max_height(box b) {
  /**
   * Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
   */ return b.height < 41;
}

