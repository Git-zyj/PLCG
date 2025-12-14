/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59253
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
    var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) (_Bool)0)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                            {
                                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_4] [i_1] [i_1] [i_1]))))) * (min((arr_9 [8ULL] [i_1] [i_3] [i_0] [i_3]), (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_2] [i_3] [9ULL]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3795988893573860495LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(unsigned char)17] [i_1] [i_0] [i_4])))))));
                                arr_11 [i_0] [i_3] [(short)12] [i_1] [i_0] [i_0] = arr_10 [i_0] [i_0] [i_0] [i_3] [i_0];
                            }
                            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                            {
                                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [16ULL] [i_3])) ? (((/* implicit */int) arr_8 [i_5] [i_5] [12ULL] [i_3])) : (((/* implicit */int) arr_8 [i_0] [i_1] [(short)2] [i_3]))))), (max((((/* implicit */long long int) (_Bool)1)), (-3795988893573860486LL))))))));
                                var_13 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)220))));
                            }
                            var_14 = ((/* implicit */long long int) (~(min((arr_6 [i_0]), (arr_6 [i_0])))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)27129)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((18446744073709551596ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0]))))) : (max((4413984309192511685ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-9177)))))));
                arr_16 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_12 [i_0])) / (arr_1 [i_0])))) ? ((-(var_5))) : (((((/* implicit */_Bool) 3795988893573860500LL)) ? (((/* implicit */int) (short)-20321)) : (((/* implicit */int) (_Bool)1))))));
                var_16 += ((/* implicit */long long int) arr_15 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        var_17 *= ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4078076744397906825ULL)) ? (3795988893573860492LL) : (arr_4 [(signed char)4])))), (min((((/* implicit */unsigned long long int) (unsigned short)64969)), (6060005576103635993ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_6] [(_Bool)1])) ? ((-(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (unsigned short)60314)) : (((/* implicit */int) (unsigned char)193)))))))));
        arr_19 [i_6] = ((/* implicit */unsigned short) arr_4 [i_6]);
    }
}
