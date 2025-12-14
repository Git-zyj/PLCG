/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75452
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
    var_13 ^= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) (signed char)-1))) : (var_4))));
    var_14 = ((/* implicit */signed char) min((var_4), (max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (signed char)25))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_14 [(_Bool)1] [i_2] [i_2] [i_4] = min((min((((/* implicit */int) max(((short)32643), ((short)-17763)))), ((-(((/* implicit */int) arr_1 [i_0])))))), (((/* implicit */int) ((unsigned short) arr_3 [i_0 + 2] [i_3]))));
                                var_15 = ((/* implicit */unsigned char) min(((signed char)66), ((signed char)66)));
                                arr_15 [i_2] [i_3] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1073741823LL)) - (9960749815800256208ULL)))) ? ((~(-2387708911598822376LL))) : (((/* implicit */long long int) ((/* implicit */int) ((-1068946006) >= (((/* implicit */int) (short)32643))))))))) ? ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_1] [i_2] [i_2] [i_0 - 1] [i_3]))) ^ (arr_0 [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 2]))) & (((unsigned long long int) (_Bool)1)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (int i_7 = 2; i_7 < 14; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (short)14497);
                                var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_22 [i_7 - 1] [i_7 - 2] [i_7] [i_7] [i_7 - 2] [i_0 + 1]), (arr_22 [i_7 - 1] [i_7 - 2] [i_7 - 2] [i_7] [i_7 + 1] [i_0 + 1]))))));
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)0)), (min((arr_11 [i_1] [i_7] [i_6] [i_5] [i_1] [i_1]), (((/* implicit */short) (unsigned char)247))))))), (max(((-(18383755292136941884ULL))), (((/* implicit */unsigned long long int) (short)-14499)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
