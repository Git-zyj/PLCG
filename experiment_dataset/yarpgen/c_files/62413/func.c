/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62413
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
    var_17 = ((/* implicit */int) min((var_7), (((/* implicit */signed char) (((+(-1862852917261084929LL))) != (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
    var_18 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1558637230193773469LL)), (var_15)))) ? (min((2263179820686237718ULL), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((var_14) >= (var_16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (min((max((1133185283U), (((/* implicit */unsigned int) var_8)))), (min((var_10), (((/* implicit */unsigned int) (unsigned char)0))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) 16183564253023313898ULL);
                                arr_14 [i_2] [i_4] [i_2] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_8);
                                arr_15 [(unsigned short)9] [i_2] [(unsigned short)8] [i_2] [(unsigned short)9] [i_2] [i_0] = ((/* implicit */unsigned char) ((((_Bool) var_7)) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3] [i_4])) ? (arr_7 [i_0] [i_1] [i_2] [i_3]) : (arr_7 [i_0] [i_1] [i_2] [i_4]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 60812652921736598ULL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [3U]))))))), (((/* implicit */unsigned int) (unsigned char)17))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 9; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            arr_22 [i_0] [i_0] [(_Bool)1] [i_6] [i_6] [(unsigned short)10] = ((/* implicit */unsigned short) var_3);
                            var_22 -= ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_18 [i_0] [i_5 - 2] [5ULL] [i_6])))), (((/* implicit */int) var_1))));
                            var_23 = ((/* implicit */unsigned long long int) var_12);
                            var_24 = ((/* implicit */unsigned char) max(((+(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)83)) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_5 + 2] [(unsigned char)7])))))), (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_0 [i_5 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_1);
}
