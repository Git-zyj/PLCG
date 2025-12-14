/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77261
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
    var_20 |= ((/* implicit */unsigned int) (unsigned short)59708);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) 1951520179)) ? (((((/* implicit */long long int) 1951520178)) ^ (-7216995316906653179LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)116))))))));
                            var_22 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_18)), (((((/* implicit */_Bool) arr_8 [4] [12ULL] [i_2] [i_2])) ? (var_6) : (((/* implicit */unsigned long long int) 4194303))))));
                            var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))) ? (9090401610001776202LL) : (((/* implicit */long long int) arr_5 [i_0] [10LL]))))) > (((288230376151711742ULL) % (((/* implicit */unsigned long long int) var_7))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_6 = 2; i_6 < 11; i_6 += 2) /* same iter space */
                            {
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (_Bool)1))));
                                var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 1918932218)) : (6625369148893116108ULL)));
                            }
                            for (unsigned char i_7 = 2; i_7 < 11; i_7 += 2) /* same iter space */
                            {
                                var_26 *= ((((/* implicit */_Bool) 968315771)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)59441)) == (-1918932250)))) : (((/* implicit */int) (unsigned char)28)));
                                var_27 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((((_Bool)1) ? (var_0) : (((/* implicit */long long int) 3104261833U)))) - (((((/* implicit */long long int) 703256268U)) - (-8060657816069390817LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)54802)) ? (arr_1 [i_1]) : (((/* implicit */int) (unsigned char)39)))) > (((/* implicit */int) ((((/* implicit */int) arr_9 [(short)4] [i_4] [i_4])) > (((/* implicit */int) arr_14 [i_7] [i_0] [i_1] [i_7]))))))))) : (((((/* implicit */_Bool) (unsigned short)11594)) ? (((arr_10 [i_0] [i_7] [i_4] [i_7]) >> (((arr_4 [i_7] [i_0]) - (1377097406U))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))));
                                var_28 -= ((/* implicit */unsigned char) ((arr_2 [i_0] [i_0]) << (((1447456078) - (1447456031)))));
                                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((max((((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_2 [i_0] [i_7 - 2]))), (((/* implicit */unsigned long long int) var_7)))) != (((/* implicit */unsigned long long int) arr_11 [i_7] [i_7] [i_7] [i_0])))))));
                            }
                            var_30 = ((/* implicit */int) max((var_30), (1951520179)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 |= ((/* implicit */int) max((12500747548548480754ULL), (((/* implicit */unsigned long long int) -2998705022745619820LL))));
    var_32 -= ((/* implicit */int) max((var_1), (((/* implicit */long long int) var_4))));
    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) var_10))));
}
