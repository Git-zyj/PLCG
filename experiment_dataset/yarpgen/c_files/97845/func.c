/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97845
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (_Bool)1)) >> (((arr_4 [i_0] [i_1] [i_1]) + (1151974499))))) < (((/* implicit */int) arr_0 [i_1])))) ? (((((/* implicit */_Bool) min((820825767780169460LL), (((/* implicit */long long int) arr_2 [0ULL]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) 3280334623506636270LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-62))) : (-3280334623506636270LL))))) : ((~(min((((/* implicit */long long int) (_Bool)0)), (var_6)))))));
                var_11 = ((/* implicit */short) ((((((((/* implicit */_Bool) 3280334623506636250LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47))) : (-3666406668529303425LL))) | (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)32749))))))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_10 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 3280334623506636273LL))) ? (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned long long int) 3280334623506636273LL)) : (8439357823037747161ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                        arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned short) arr_9 [5LL]));
                        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((arr_8 [i_0] [i_3] [i_2] [i_1]) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_1])) : (((/* implicit */int) (unsigned char)66)))))));
                    }
                    arr_12 [i_1] [i_2] = ((/* implicit */long long int) min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */_Bool) (~(3666406668529303401LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1665614765)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)66))))))))));
                    arr_13 [i_0] [i_1] [i_0] |= ((/* implicit */_Bool) min(((~(arr_9 [i_0]))), (((((/* implicit */_Bool) ((long long int) (unsigned char)242))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)212))))) : ((~(3280334623506636270LL)))))));
                }
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                {
                    arr_18 [i_1] [i_0] [i_0] [i_0] = (((!(((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) arr_17 [i_1] [i_4])));
                    arr_19 [i_1] [i_1] [6] = max(((unsigned char)88), (((/* implicit */unsigned char) min((arr_0 [i_0]), (arr_0 [i_0])))));
                    var_13 = ((/* implicit */short) min(((signed char)44), ((signed char)-61)));
                }
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    var_14 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61))) : (143422311U))));
                    arr_22 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */unsigned long long int) var_9);
                    var_15 &= ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_17 [i_0] [i_0])) * (((/* implicit */int) min((var_9), (arr_15 [i_0] [i_1]))))))));
                    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (9ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), (arr_1 [i_1] [i_0])))))))) ? (((/* implicit */int) arr_2 [i_0])) : (var_3));
                    arr_23 [i_1] = ((/* implicit */long long int) ((unsigned int) ((min((((/* implicit */unsigned long long int) arr_6 [i_0])), (0ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) var_4))))))));
                }
                arr_24 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)32313)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) (short)5629)) : (((/* implicit */int) arr_14 [i_1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-57)), (16131051849268356571ULL)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) 3904365245U)), (3280334623506636249LL)))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((18446744073709551596ULL), (((/* implicit */unsigned long long int) (unsigned char)31)))))))))));
}
