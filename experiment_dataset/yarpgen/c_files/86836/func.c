/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86836
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
    var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned short) var_5))) : (min((((/* implicit */int) (unsigned short)46351)), (551526221)))))) ? (((/* implicit */long long int) max((max((((/* implicit */unsigned int) (short)-2373)), (3301028405U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (331161067) : (var_5))))))) : (var_7)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((_Bool) -795320911)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) max((((/* implicit */unsigned short) ((short) arr_2 [i_0]))), (arr_3 [i_0]))))));
                arr_8 [i_0] [i_0] [i_1] = arr_4 [i_1];
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) ((max((5356823481244093746ULL), (((/* implicit */unsigned long long int) -331161055)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13)) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) (_Bool)1))))) ? (arr_10 [i_0] [i_1] [i_1]) : (max((((/* implicit */int) var_14)), (arr_10 [i_0] [i_1] [i_1]))))))));
                            arr_13 [i_1] [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (4095290361U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (min((((/* implicit */long long int) (unsigned char)168)), (-5LL))) : (((/* implicit */long long int) -7))))) ? (((((/* implicit */_Bool) arr_3 [i_2])) ? (1) : (((/* implicit */int) (_Bool)0)))) : ((-2147483647 - 1))));
                            arr_14 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)20068)) ? (((/* implicit */int) (short)-21243)) : (((/* implicit */int) (_Bool)1)))) + (((551526231) / (((/* implicit */int) arr_11 [i_0] [i_1] [i_3]))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -1124452063)) == (((((/* implicit */_Bool) 12664751427765517193ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20043))) : (min((((/* implicit */unsigned long long int) (unsigned char)0)), (18446744073709551601ULL)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_4] [i_0] [i_1] = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_6 [i_1])) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_1] [i_4]))))))) && (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (short)8447)) ? (arr_10 [i_1] [i_1] [i_1]) : (((/* implicit */int) (short)-32651)))))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_16 [i_5 + 2] [i_5 + 1] [i_5] [i_5 + 2]))) - (((/* implicit */int) min((((/* implicit */short) ((unsigned char) 0ULL))), (arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
