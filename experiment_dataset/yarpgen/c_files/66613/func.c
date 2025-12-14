/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66613
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
    var_13 = ((/* implicit */unsigned char) (((~((~(((/* implicit */int) var_8)))))) ^ (((/* implicit */int) var_6))));
    var_14 = ((/* implicit */unsigned short) ((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [0U] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((arr_1 [i_0 + 1]), (((/* implicit */unsigned short) var_11))))) ? (min((((/* implicit */unsigned long long int) (short)-32761)), (13125121149798616910ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) ^ (((20ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) var_1)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = (~(((((/* implicit */_Bool) 13125121149798616894ULL)) ? (5321622923910934702ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31208))))));
                    var_15 = ((/* implicit */unsigned long long int) arr_7 [10U] [i_0 + 1] [i_2] [i_2]);
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_11)))) > (((/* implicit */int) min((arr_1 [i_0 + 1]), (((/* implicit */unsigned short) arr_4 [i_0 + 1] [i_0 + 1]))))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) (short)-3709);
        /* LoopSeq 3 */
        for (unsigned int i_3 = 2; i_3 < 14; i_3 += 4) /* same iter space */
        {
            var_18 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (arr_12 [i_3])))) ? ((+(8347901385777570635ULL))) : (((unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (~(1U))))));
            arr_13 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((13U) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (arr_11 [i_0] [i_3 + 1])))) ? (((((/* implicit */int) var_3)) - (1798817038))) : (((/* implicit */int) ((-1988577494) < (((/* implicit */int) var_1))))))))));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                arr_16 [2U] [i_3] [i_0] [12U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)15)) ^ (-2147483633)));
                var_19 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_3 + 3])), (18446744073709551604ULL))), (((/* implicit */unsigned long long int) 4294967286U))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_11 [i_3 - 1] [i_0 + 1]))))))));
                var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)158)) ^ (((/* implicit */int) var_8))))) ? (((var_11) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_6)))) : (1798817059)))), (((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (max((((/* implicit */unsigned int) var_4)), (910126358U)))))));
                var_22 = ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)243), (arr_3 [i_0] [i_0]))))) & (((unsigned long long int) arr_1 [i_0 - 1])))));
            }
            var_23 = ((/* implicit */unsigned char) ((int) min((((/* implicit */unsigned short) arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_3 - 1])), (arr_1 [i_0 + 1]))));
            arr_17 [i_0] [i_3] = (-((+(((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0 - 1])))));
        }
        for (unsigned int i_5 = 2; i_5 < 14; i_5 += 4) /* same iter space */
        {
            var_24 &= ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [5ULL] [i_5] [5ULL]))) & (arr_12 [i_5]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_5] [i_5])) ^ (((/* implicit */int) ((short) (unsigned short)27763))))))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((unsigned short) arr_12 [i_0])), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_5 + 3])), (var_3))))))) < (((((/* implicit */_Bool) (~(-2147483633)))) ? (2147483637) : (((/* implicit */int) (_Bool)1))))));
            arr_21 [i_0] [6ULL] [i_0] = max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 1] [i_5 + 3] [i_5 - 1])) % (((/* implicit */int) (unsigned char)252))))), ((~((((_Bool)1) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3691))))))));
            arr_22 [i_0] [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((unsigned char) var_1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((-(arr_19 [i_0]))) : (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0]))))))))));
        }
        for (unsigned int i_6 = 2; i_6 < 14; i_6 += 4) /* same iter space */
        {
            arr_26 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_15 [i_0] [i_0] [i_6 - 1] [i_6]), (((/* implicit */unsigned short) arr_7 [i_0] [i_6 + 2] [i_6 + 1] [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((18446744073709551607ULL) == (((/* implicit */unsigned long long int) 2141627225U)))))) : ((~(4294967295U)))))) ? ((~(((((/* implicit */int) arr_7 [i_0 + 1] [i_6] [i_6] [i_0])) % (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) min((4294967271U), (((/* implicit */unsigned int) -1554774601))))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_2)))) : (((((/* implicit */int) var_4)) * (((/* implicit */int) var_11))))))));
            arr_27 [i_6] |= ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_0))))) | (((((/* implicit */_Bool) arr_23 [i_0] [(unsigned char)8] [i_6])) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) var_11)))));
        }
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 4) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (~(17475021342092662597ULL))))));
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) 1796764151))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) (+(var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
}
