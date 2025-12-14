/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88741
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) arr_1 [i_0]);
                var_16 = ((/* implicit */_Bool) (-((-(((/* implicit */int) ((_Bool) arr_1 [i_0])))))));
                var_17 = ((/* implicit */unsigned short) (unsigned char)138);
                var_18 = ((/* implicit */_Bool) min((2147483643), (((/* implicit */int) (unsigned char)115))));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_0 [7]))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) var_0)), (var_3))) : (((3145728ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32747))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (unsigned int i_3 = 4; i_3 < 12; i_3 += 3) 
        {
            {
                arr_12 [i_2] [i_2] = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_2] [i_3 - 3])) * (((/* implicit */int) arr_10 [i_3 - 2]))))) != (var_8))), (((((/* implicit */int) (unsigned char)166)) >= (((/* implicit */int) (unsigned char)72))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 3; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((max((arr_15 [i_5 - 1] [i_3 + 2]), (arr_9 [i_3 - 4] [i_3 + 2]))) ? (((/* implicit */int) ((((((/* implicit */unsigned long long int) 22390190U)) / (5501107629075281539ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [(_Bool)1])) ? (arr_14 [i_4] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_3]))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_4] [i_5 + 3])))))));
                            var_22 = ((/* implicit */_Bool) min((min((((((/* implicit */int) var_5)) ^ (arr_11 [(unsigned char)6]))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) -4129431408136652468LL))))))), ((~(((((/* implicit */int) var_12)) / (((/* implicit */int) var_5))))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_4]))) >= (arr_5 [i_2] [i_2]))))))) <= ((-(8600486700357708297ULL)))));
                            arr_17 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_3 - 3])) == (((/* implicit */int) arr_15 [i_3 - 3] [i_3 - 2]))))), (min((((/* implicit */unsigned short) var_10)), (arr_8 [i_3 - 2])))));
                            arr_18 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) 144115188075823104LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), ((-(var_9)))))) ? (((/* implicit */unsigned long long int) ((((_Bool) var_11)) ? (var_7) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_10)))))))) : (var_1)));
}
