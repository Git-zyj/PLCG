/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90182
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
    var_14 *= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) max((var_5), (((/* implicit */int) var_1))))) && (((var_5) > (((/* implicit */int) (unsigned char)255)))))));
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((3453677657167269677LL) > (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (((var_0) / (((/* implicit */unsigned int) var_3))))))) ? (var_5) : (((/* implicit */int) var_9)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)46428)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (16527578796456987202ULL)));
        arr_3 [i_0] [(_Bool)1] &= ((int) (_Bool)1);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)0))))));
        var_17 = ((/* implicit */int) (unsigned short)0);
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)25)) > (arr_2 [i_1]))))))) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((short) arr_0 [i_1]))) : (((arr_2 [i_1]) + (((/* implicit */int) (unsigned char)5)))))))))));
        arr_7 [i_1] [i_1] &= ((/* implicit */unsigned long long int) (unsigned char)251);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-11343)) ? (max(((-(0ULL))), (((/* implicit */unsigned long long int) var_6)))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)11342))) + (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((var_1), ((unsigned char)233))))))));
                        arr_16 [i_4] [i_3] [i_2] [i_4] = ((/* implicit */signed char) min((min((((/* implicit */int) ((unsigned short) (unsigned short)65535))), (((((/* implicit */int) (unsigned char)49)) << (((((-1LL) + (31LL))) - (23LL))))))), (((((/* implicit */int) min(((signed char)126), (((/* implicit */signed char) (_Bool)0))))) / (((/* implicit */int) (signed char)19))))));
                        var_20 = ((/* implicit */unsigned int) (_Bool)0);
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1946745994636658163LL)))) ? (((/* implicit */int) var_9)) : (arr_6 [i_1]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [i_5] [i_4] [i_4] [i_4] [i_2] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((_Bool) arr_10 [i_1] [i_1]))), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-38))))) ? (min((9223372036854775807LL), (((/* implicit */long long int) arr_8 [i_1] [i_3] [i_1])))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65519)))))))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)123)) / (((/* implicit */int) (_Bool)1))))) ? (min((7716432000487577695LL), (((/* implicit */long long int) (signed char)29)))) : (((/* implicit */long long int) ((int) (+(((/* implicit */int) (_Bool)0)))))))))));
                            arr_20 [i_1] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned short)17)) * (((/* implicit */int) arr_12 [i_5] [i_3] [i_1]))))));
                            arr_21 [i_4] [i_4] [i_2] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) ((((((_Bool) (unsigned short)2047)) && (((/* implicit */_Bool) ((unsigned int) var_3))))) ? ((-(((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_11 [i_5] [i_4])), (arr_9 [i_5] [i_5])))) ? (arr_14 [i_1] [i_4] [i_3] [i_4] [i_5]) : (((/* implicit */unsigned int) 1630914050)))))));
                            var_23 += ((/* implicit */unsigned int) ((((/* implicit */int) (!((((_Bool)1) && (((/* implicit */_Bool) arr_1 [i_1] [i_1]))))))) * (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */unsigned int) var_8)) : (1527151162U)))) && ((!(arr_11 [i_3] [i_1]))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (int i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        arr_26 [i_6] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) 2147483647)), (68719476735ULL))), (max((0ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (long long int i_7 = 2; i_7 < 14; i_7 += 4) 
        {
            arr_29 [i_6] = ((/* implicit */unsigned int) (~(((int) min((((/* implicit */unsigned long long int) (signed char)64)), (18446744073709551615ULL))))));
            arr_30 [i_6] [i_7 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned int) -2010595439)), (var_0))) : (((/* implicit */unsigned int) ((((var_5) / (var_5))) << (((max((var_12), (((/* implicit */int) (short)32585)))) - (345327072))))))));
        }
    }
}
