/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83227
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
    var_10 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)53579)))) : (var_1));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) ((long long int) min((((/* implicit */unsigned int) ((unsigned short) var_3))), (var_8))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) arr_0 [i_2]);
                            var_13 -= ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) min((arr_1 [i_0 - 2]), (2331446109U)))) - (arr_9 [i_0 + 3] [i_3] [i_3] [i_3] [i_3]))), (((/* implicit */unsigned long long int) ((arr_4 [i_2 - 1]) < (arr_4 [i_2 - 1]))))));
                            arr_10 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-56))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)1))))) : (((((/* implicit */_Bool) (short)7936)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (12836674489113264150ULL))))))));
                            var_14 *= ((/* implicit */unsigned int) (short)7936);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (short i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_15 = max(((~(arr_0 [i_0 - 2]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5118))) : (arr_9 [i_0 + 3] [i_1 - 1] [i_4] [i_5 + 1] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (arr_4 [i_0]))));
                            arr_17 [i_0] [i_1 + 1] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */short) ((long long int) min((((/* implicit */signed char) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) -1083227836))))), (((signed char) 6554359483139609607ULL)))));
                            var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (3322172286U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) (short)-10098))))))) : (arr_16 [i_0] [i_0] [i_4] [i_0] [i_4])));
                            arr_18 [i_0 - 2] [i_1 + 1] = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) (unsigned short)0)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) (-(var_8))))))));
                            var_17 = ((/* implicit */unsigned long long int) arr_2 [i_4]);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) arr_6 [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_22 [i_6] [i_6] = ((/* implicit */short) var_6);
        var_19 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) arr_20 [i_6] [(short)12])) : (var_6))), (((/* implicit */int) max((min((var_4), (((/* implicit */unsigned short) var_9)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))))))))));
        var_20 = ((/* implicit */short) min((var_8), (max((var_8), (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))))));
    }
    var_21 = ((/* implicit */int) (-(((long long int) ((14686067199912224559ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))))))));
    var_22 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) (short)70)))))) <= (min((var_5), (((/* implicit */unsigned long long int) var_4))))))) < (((/* implicit */int) var_0))));
}
