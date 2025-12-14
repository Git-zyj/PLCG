/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60799
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = ((/* implicit */signed char) var_3);
    var_18 = ((/* implicit */unsigned int) var_4);
    var_19 = ((/* implicit */signed char) ((355258709U) - (3939708589U)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_20 &= ((/* implicit */signed char) min((3939708589U), (((/* implicit */unsigned int) ((unsigned char) (short)-32755)))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((3939708577U) % (355258719U)))) % ((+(var_6))))))));
                arr_8 [i_0] [i_1] [i_1 + 1] = ((/* implicit */long long int) ((unsigned int) (~(((((/* implicit */_Bool) 3939708586U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (3519505078U))))));
            }
        } 
    } 
    var_21 += ((/* implicit */_Bool) var_16);
}
