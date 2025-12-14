/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56123
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    var_11 -= ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) max(((short)-32752), ((short)32752)))), (18446744073709551615ULL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_8 [i_4]) > (2127778952))) ? ((~(var_0))) : (((/* implicit */int) ((unsigned char) var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) (short)-32752))) >= ((~(((/* implicit */int) (_Bool)0)))))))) : (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0 + 2] [i_1 + 1]) : (((/* implicit */unsigned int) var_4))))));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-32752))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), ((((_Bool)0) ? (((/* implicit */int) (unsigned short)1444)) : (((/* implicit */int) (short)32739)))))) : ((((_Bool)0) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) (short)25765))))));
                                var_14 = ((/* implicit */short) min((((/* implicit */unsigned short) ((signed char) (-(arr_5 [i_0] [i_1 - 3]))))), (((unsigned short) (short)32751))));
                                var_15 &= ((/* implicit */unsigned long long int) (unsigned char)75);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? ((~(((1650164425U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (short)25765)), (588994277))))));
                                var_17 = ((/* implicit */short) (-((-(((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-70))) : (arr_5 [(_Bool)1] [13])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_7 = 1; i_7 < 10; i_7 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 981400787)) && (((/* implicit */_Bool) arr_6 [i_7] [i_7])))))) != (((((/* implicit */_Bool) arr_16 [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1] [i_7])) ? ((~(532676608U))) : (((/* implicit */unsigned int) ((var_5) % (((/* implicit */int) arr_2 [i_7])))))))));
        var_19 = ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)116)), (max((((/* implicit */unsigned char) arr_18 [i_7 + 1])), (((unsigned char) -588994277))))));
    }
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(min((((/* implicit */int) var_3)), (var_8)))))) >= (min(((+(370035978U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)252)) ? (var_0) : (((/* implicit */int) var_10)))))))));
}
