/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60240
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (((~(((65535) | (65535))))) ^ (min((-65535), (((/* implicit */int) var_10))))));
        var_11 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-968732615768039745LL), (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))))) ? (((((var_9) - (((/* implicit */long long int) var_3)))) | (((/* implicit */long long int) -65514)))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((-139440612) ^ (((/* implicit */int) (unsigned short)65535))))) / (var_4))))));
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? ((((~(65535))) | (-65514))) : (((int) min((16LL), (45LL))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) var_2))) % (min((((/* implicit */long long int) var_5)), (var_6))))), (((/* implicit */long long int) ((_Bool) min((((/* implicit */long long int) (short)-24483)), (-3037846526913215280LL)))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) min((-65514), (-65536)))) | (min((var_6), (((/* implicit */long long int) (unsigned short)51607)))))), ((-(var_9)))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        for (short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            {
                arr_13 [i_2] [i_2] = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) min(((short)24455), ((short)24482))))) * (min((((/* implicit */unsigned int) (_Bool)1)), (2712440517U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_9) / (var_9)))))))));
                var_13 = ((/* implicit */unsigned short) (-((-(min((((/* implicit */int) var_10)), (var_1)))))));
                arr_14 [i_1] [i_2] = ((/* implicit */long long int) ((short) min((((var_9) - (((/* implicit */long long int) 0U)))), (((/* implicit */long long int) min((var_2), (((/* implicit */short) (unsigned char)116))))))));
                var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-13886)) ? (((long long int) ((unsigned char) (short)24482))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) ((int) (_Bool)1))), ((~(var_3))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) min((((min((((/* implicit */long long int) (short)-4369)), (-6323797453801458498LL))) % (((/* implicit */long long int) (-(((/* implicit */int) (short)24482))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) / (var_6)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-26)), ((unsigned short)34934)))) : (min((65513), (var_1))))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (((long long int) var_5))))) ? (((/* implicit */long long int) (((+(((/* implicit */int) (unsigned short)0)))) / (((((/* implicit */int) (short)11064)) / (((/* implicit */int) (unsigned short)19))))))) : (min((min((((/* implicit */long long int) (signed char)-61)), (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_3))))))));
}
