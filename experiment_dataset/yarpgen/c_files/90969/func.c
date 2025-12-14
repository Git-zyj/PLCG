/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90969
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
    var_12 = ((/* implicit */int) min((var_12), (((var_10) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) (unsigned char)203))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) arr_7 [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((((_Bool) (-(((/* implicit */int) (unsigned short)65532))))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)128)) : (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1] [i_0])) ? (((/* implicit */int) (short)-31255)) : (((/* implicit */int) (unsigned char)33))))))) : ((-(arr_3 [i_1 - 3] [i_3 + 4] [i_4])))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65514))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)33)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [13] [i_3 + 2] [17LL] [i_1] [i_1] [i_0])))))) ? (var_7) : (((/* implicit */int) arr_1 [(signed char)7])))) : (((((/* implicit */_Bool) ((signed char) arr_8 [i_0]))) ? (((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_1] [(signed char)12])) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)65524))))));
                                arr_14 [i_0] [i_1] [i_2 + 2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_0 + 1] [0] [i_0] [i_0] [(signed char)20])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35))) : (arr_11 [i_0] [i_1])))) ? (((/* implicit */int) ((short) arr_5 [i_0 - 1] [i_1] [i_3 + 3]))) : ((~(((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) arr_4 [i_3]))))))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_1] [i_0] |= ((/* implicit */unsigned int) (~(-7390578733486979331LL)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) (short)-17044)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (unsigned short)65528))))) : ((((_Bool)0) ? (var_5) : (((/* implicit */long long int) var_7)))))) : (-6182013118559764200LL)));
}
