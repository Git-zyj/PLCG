/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65544
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
    var_12 = ((/* implicit */unsigned long long int) var_0);
    var_13 = ((/* implicit */long long int) (_Bool)1);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((_Bool) ((int) 8102663867302480838LL))))));
        var_15 = (_Bool)1;
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65527)) ? (-1741254362) : (-1741254362)));
            var_16 ^= ((/* implicit */unsigned long long int) (_Bool)1);
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) -1741254377));
        }
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) -8284811446326784798LL);
            var_18 *= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 1220128306)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65502)))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65488))) || (((/* implicit */_Bool) ((signed char) (unsigned short)8)))));
        }
        var_20 &= ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) (unsigned short)65527)))));
        var_21 *= ((/* implicit */unsigned char) (_Bool)1);
    }
    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 2) 
    {
        arr_13 [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 4467570830351532032LL)) && (((/* implicit */_Bool) 6255344655241574009ULL)))))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned short) ((-1741254363) + (((/* implicit */int) (signed char)-61)))));
        arr_15 [i_3] = ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned short)65528)) ? (670579964U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64238)))))));
    }
}
