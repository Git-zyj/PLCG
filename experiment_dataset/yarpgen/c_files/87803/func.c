/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87803
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
    var_12 = ((/* implicit */int) max((((/* implicit */long long int) 2737810910U)), (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5981337531409036164LL)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */int) ((_Bool) 1557156386U))), (((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)10));
                                arr_15 [i_0 - 4] [3U] [i_0] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)118)), (((((/* implicit */int) ((((/* implicit */int) (signed char)-4)) != (((/* implicit */int) (unsigned char)110))))) ^ (((((/* implicit */_Bool) (short)-405)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) arr_1 [i_3] [i_4]))))))));
                                arr_16 [i_0] [i_4] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */int) (short)6910)) << (((((/* implicit */int) max(((signed char)-121), (arr_7 [i_0] [i_0] [i_0] [i_3])))) + (38))))), (((int) ((((/* implicit */int) (short)-512)) * (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                var_15 += ((/* implicit */short) min((((/* implicit */int) ((max((1979630217), (arr_2 [i_0]))) != (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)220))))))), ((((((~(((/* implicit */int) (unsigned short)37696)))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)114))) ? (min((((/* implicit */unsigned long long int) (signed char)-123)), (18446744073709551606ULL))) : (((/* implicit */unsigned long long int) var_3))))));
    var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)-17970)))), (((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)120)), (141863388262170624LL)))) ? (max((((/* implicit */unsigned long long int) (short)26379)), (9683880051655350354ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)47)))))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)58)) % (((/* implicit */int) (short)32756))));
}
