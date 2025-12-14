/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82597
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
    var_12 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) : (7564036359192688234LL))) <= (((/* implicit */long long int) var_1)))) && (((/* implicit */_Bool) var_3))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) var_7);
                    var_14 -= ((/* implicit */unsigned long long int) ((13437682854934298278ULL) == (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 22; i_5 += 1) 
                {
                    for (signed char i_6 = 1; i_6 < 22; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            {
                                var_15 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-33)) < (((/* implicit */int) (signed char)33)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4 + 1]))) : (arr_4 [i_4 + 1] [i_3])))) <= (min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) (unsigned char)3)) ? (13584603315083918910ULL) : (((/* implicit */unsigned long long int) 3434881025972276690LL))))))));
                                arr_18 [i_6] [i_4 + 1] = ((/* implicit */int) (short)32767);
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-33)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))))))));
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) 8049150546146296820LL))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((7209788451285771178LL), (arr_10 [i_3] [i_4] [i_4 + 1])))) ? (min((var_8), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((((/* implicit */int) (signed char)95)) - (91))))))));
                arr_20 [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_4] [i_4]))))) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) var_11)) : (var_8)));
                var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)51383)) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((arr_10 [i_4 + 1] [i_4] [i_3]) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)61858)) == (-125784562)))))))) : (((((((/* implicit */int) (short)17292)) | (((/* implicit */int) (short)9973)))) << (((/* implicit */int) ((var_1) >= (var_11))))))));
            }
        } 
    } 
    var_19 -= ((/* implicit */signed char) var_9);
}
