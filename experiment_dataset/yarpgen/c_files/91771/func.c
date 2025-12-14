/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91771
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
    var_15 = var_14;
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 |= ((/* implicit */unsigned char) 3321658353U);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_1 [18] [4LL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)86)))) : (((/* implicit */int) arr_0 [i_0 - 1] [i_1 + 1])))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 3] [i_1 + 3]))) : (var_12)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [(unsigned short)2] [(unsigned short)2]))))) : (((((/* implicit */_Bool) (signed char)2)) ? (12711278458204159919ULL) : (((/* implicit */unsigned long long int) arr_8 [i_1] [i_2]))))));
                    arr_11 [i_3] [i_2] [i_2] [i_2] = ((unsigned char) (~(3U)));
                    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0] [i_0 - 1]))));
                    var_20 |= ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_4 [13LL]))))));
                    arr_12 [i_3] [(_Bool)1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? ((+(var_6))) : (((/* implicit */long long int) (~(-1819801034))))));
                }
                var_21 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)65524))))));
                var_22 = ((/* implicit */long long int) (~((~(arr_9 [i_0] [i_0] [(signed char)16] [i_0])))));
                var_23 *= ((/* implicit */signed char) (!(arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                var_24 += ((/* implicit */_Bool) arr_6 [i_0] [i_0]);
            }
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                arr_16 [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) var_2);
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))))));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 1; i_5 < 22; i_5 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_9))))))));
                    arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_10);
                    arr_21 [i_0 - 1] [(_Bool)1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */long long int) ((arr_7 [i_5] [i_5] [(unsigned char)6]) ? (var_4) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((((/* implicit */_Bool) (signed char)25)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (signed char)64)))))));
                }
                for (unsigned char i_6 = 1; i_6 < 22; i_6 += 4) /* same iter space */
                {
                    arr_24 [i_6] [i_1] [i_4] [i_6] = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) (_Bool)1)))));
                    arr_25 [i_0] [(_Bool)1] [i_4] [i_4] &= ((/* implicit */signed char) arr_3 [i_0] [i_0 - 1]);
                }
            }
        }
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            arr_28 [i_0] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)32750))));
            var_27 += (unsigned short)65535;
        }
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_32 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) : (arr_14 [i_8] [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */short) (unsigned char)255)))))) : (arr_14 [i_8] [i_8])));
        var_28 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) max((var_9), (((/* implicit */long long int) 1702919029)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_8] [i_8]))) : (14651863903648976403ULL)))) ? (((/* implicit */int) ((signed char) arr_18 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))) : (((int) arr_17 [i_8] [i_8] [1U]))))) : (((((unsigned int) (short)28534)) << (((/* implicit */int) (!(arr_7 [i_8] [i_8] [i_8]))))))));
    }
}
