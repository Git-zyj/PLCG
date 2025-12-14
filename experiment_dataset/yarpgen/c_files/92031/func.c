/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92031
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
    var_19 = ((/* implicit */unsigned long long int) var_3);
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_8)) : (var_11)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))));
    var_21 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_2))) || (((/* implicit */_Bool) min((8464730395273330348ULL), (var_0)))))))) > (min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)116)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) var_12);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_3 + 2] [i_4] = max((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [10ULL] [i_0] [i_3])) ? (max((((/* implicit */long long int) var_6)), (var_15))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28672))))), (((/* implicit */long long int) max((((/* implicit */int) (short)-23731)), (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [4] [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))))));
                                var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 8464730395273330338ULL)) ? (9982013678436221258ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((unsigned long long int) var_7))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_5 [i_3 + 1] [i_3 - 2] [i_3 - 1] [i_3]) : (var_17))) : (var_17)));
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) 853292972217812033LL))));
                                var_25 -= ((/* implicit */unsigned long long int) ((_Bool) -1223883113));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1] [i_2] [i_2] = var_7;
                    var_26 -= ((/* implicit */_Bool) (~((~(8464730395273330344ULL)))));
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            var_27 = ((/* implicit */signed char) (-2147483647 - 1));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) arr_9 [i_6] [i_5] [i_0] [i_0]))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_22 [3ULL] [i_1] [i_2] [i_5] [i_7] [(unsigned char)11] = ((/* implicit */_Bool) (~(8464730395273330377ULL)));
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) arr_10 [(unsigned char)4] [9U] [(unsigned short)0] [i_5] [i_7]))));
                        }
                        arr_23 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) max((min((var_18), (((/* implicit */short) var_1)))), (((/* implicit */short) min((arr_12 [2] [i_1] [i_2] [i_1] [i_0]), (var_13))))))), (max((arr_10 [i_0] [i_0] [i_1] [i_2] [i_5]), (arr_10 [i_0] [i_1] [i_2] [i_5] [(unsigned short)7])))));
                    }
                    for (long long int i_8 = 4; i_8 < 11; i_8 += 2) 
                    {
                        var_30 -= ((/* implicit */signed char) (+(((/* implicit */int) ((arr_11 [i_0] [i_0] [i_8 - 4] [i_8] [i_2] [i_0]) != (((/* implicit */int) var_5)))))));
                        var_31 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (var_15)));
                        var_32 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((arr_10 [i_0] [i_1] [i_2] [i_8 - 1] [(_Bool)0]), (((/* implicit */unsigned short) var_3))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_15)) / (var_17)))) ? ((((_Bool)1) ? (8464730395273330321ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (var_16)))))) : (((/* implicit */unsigned long long int) max((502664402665176447LL), (((/* implicit */long long int) (unsigned short)65535)))))));
                        var_33 ^= ((/* implicit */short) var_3);
                        arr_27 [i_1] [i_1] [(unsigned short)7] [i_1] [i_1] = ((/* implicit */_Bool) arr_17 [i_2] [i_1]);
                    }
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        arr_32 [i_1] [i_1] [i_2] [i_2] = min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */int) var_1))))))), ((~(((((/* implicit */_Bool) 853292972217812052LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_19 [i_1] [i_2]))))));
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)65522)), (1223883106))))));
                        arr_33 [i_0] [(unsigned char)0] [i_1] [i_1] = ((/* implicit */unsigned char) (-(max((var_15), (((/* implicit */long long int) arr_24 [i_2] [i_1]))))));
                    }
                }
            } 
        } 
    } 
}
