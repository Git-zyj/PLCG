/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67736
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
    var_13 += ((/* implicit */int) (signed char)-38);
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) : (((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */long long int) -936336305)) : (-9223372036854775799LL)))))) : (((unsigned long long int) arr_2 [15]))));
        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) 10794665804984553559ULL))) != (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0 - 1])), (var_11))))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_2 [i_0]))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4087866046U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0])))))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((unsigned short) max((arr_1 [i_1 + 1]), (arr_1 [i_1 + 1]))));
        arr_5 [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2626362039U)) || (((/* implicit */_Bool) (signed char)(-127 - 1)))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_2 = 3; i_2 < 14; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 2; i_4 < 15; i_4 += 2) 
            {
                var_20 = ((/* implicit */signed char) (~(-1LL)));
                var_21 = -9223372036854775799LL;
            }
            arr_14 [i_2] = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) arr_8 [i_2 + 1])))), (((((/* implicit */_Bool) var_10)) || (arr_3 [i_2 - 1])))));
            arr_15 [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */short) arr_10 [5U])), (((short) arr_2 [i_2 - 3]))));
        }
        for (long long int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
        {
            arr_19 [i_5] [i_2] = ((/* implicit */unsigned short) arr_13 [i_2]);
            var_22 = ((/* implicit */int) ((long long int) max((((/* implicit */int) ((_Bool) 16383))), (1274970509))));
        }
        var_23 = ((/* implicit */unsigned int) arr_3 [i_2]);
    }
    for (unsigned char i_6 = 3; i_6 < 14; i_6 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_6 - 2])))))));
        var_25 -= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_6 [i_6 + 1] [i_6 + 1])) | (((/* implicit */int) arr_6 [i_6 - 1] [i_6]))))));
    }
}
