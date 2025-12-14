/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79150
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (-(((/* implicit */int) var_9)))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_2 [i_0 - 1]), (arr_2 [i_0 + 4])))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_1 [i_0 + 2])))));
        /* LoopSeq 3 */
        for (int i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) arr_3 [6] [6]))));
            var_14 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [14LL])) > (((/* implicit */int) var_4))))) <= (((((/* implicit */int) var_7)) << (((/* implicit */int) var_4)))))) ? (((/* implicit */int) arr_4 [6] [i_1 - 1])) : (var_0)));
            arr_6 [21] [(unsigned char)23] [(unsigned char)23] |= ((/* implicit */_Bool) (((!((_Bool)1))) ? ((-((-(((/* implicit */int) arr_4 [18] [i_0 + 1])))))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)0))))));
        }
        for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (~(var_0))))))))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 4; i_3 < 20; i_3 += 4) 
            {
                var_16 |= arr_2 [i_0];
                arr_13 [(unsigned char)5] [(_Bool)1] [(unsigned char)21] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_8 [i_3] [12]), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-42)))))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_2])))))));
            }
            arr_14 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [(_Bool)0])) ? (min((var_5), (((((/* implicit */int) arr_3 [i_0] [i_0])) - (((/* implicit */int) arr_3 [i_0] [i_2])))))) : (((((/* implicit */_Bool) (~(-1658992474)))) ? (((arr_12 [(_Bool)1] [2] [(_Bool)1] [19LL]) & (((/* implicit */int) var_6)))) : (((/* implicit */int) var_4))))));
            var_17 += ((/* implicit */unsigned int) var_5);
            arr_15 [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -360987548)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (signed char)57))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_20 [i_0] [16LL] |= (+((-(arr_19 [i_0 + 2]))));
            var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 4] [i_0 + 2]))) % (((((/* implicit */_Bool) -1658992475)) ? (615313380446849923LL) : (((/* implicit */long long int) 1243454176))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_5 = 2; i_5 < 23; i_5 += 3) 
            {
                var_19 = (-((~(((/* implicit */int) var_2)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 4) 
                {
                    arr_26 [(unsigned char)20] [(unsigned char)19] [(unsigned char)8] [i_5] [i_4] [i_6 + 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((var_7) && (arr_11 [i_4] [i_4] [i_4] [i_6]))))));
                    var_20 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)));
                }
                arr_27 [11U] [i_4] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)126))));
            }
            arr_28 [(unsigned char)19] [i_4] [(unsigned char)7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 + 1])) % ((-(((/* implicit */int) var_3)))))))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 1; i_7 < 22; i_7 += 4) 
            {
                arr_32 [(unsigned char)17] [i_4] [(unsigned char)7] [i_4] = arr_24 [i_4] [(unsigned short)4] [i_7 - 1] [i_7 - 1];
                var_21 = ((/* implicit */unsigned char) arr_16 [i_4] [i_4]);
                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_0] [i_0 + 4] [(unsigned short)6]))));
            }
        }
    }
}
