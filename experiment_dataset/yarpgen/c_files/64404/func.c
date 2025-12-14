/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64404
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
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) min(((+(min((var_1), (((/* implicit */long long int) arr_3 [i_0])))))), (((/* implicit */long long int) min(((signed char)52), ((signed char)-23))))));
                arr_4 [22LL] [i_1] [i_1] = ((/* implicit */signed char) ((((unsigned int) ((((/* implicit */int) (signed char)-23)) - (((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */unsigned int) var_9))));
                arr_5 [i_1] = ((/* implicit */unsigned short) (short)-6618);
                var_14 = (((+(((/* implicit */int) arr_2 [i_0] [i_1] [i_1 + 2])))) > (((/* implicit */int) min((arr_2 [i_0] [i_1] [i_1 + 2]), (arr_2 [i_0] [i_1] [i_1 - 1])))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) arr_2 [i_1] [i_1] [i_1]);
            }
        } 
    } 
    var_15 += ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            {
                var_16 += ((/* implicit */_Bool) arr_1 [i_3]);
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((max((((arr_0 [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61))) : (arr_8 [(short)11]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)23))))))), (max((arr_17 [i_5] [i_4] [(_Bool)0] [i_3] [i_2] [10LL]), (((unsigned long long int) var_7)))))))));
                            var_18 = ((/* implicit */_Bool) (((~(min((var_8), (((/* implicit */unsigned long long int) (_Bool)0)))))) >> (((((2352128087U) << (((2110540063U) - (2110540044U))))) - (45613024U)))));
                            var_19 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)31394)) + (((/* implicit */int) arr_11 [i_2]))))) && (max(((_Bool)1), (arr_11 [i_2]))))))));
                        }
                    } 
                } 
                arr_18 [i_2] [(short)12] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-66)), ((unsigned char)70)));
                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) (unsigned char)98)))));
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) - (((((/* implicit */_Bool) (signed char)-56)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))) ? (3943643966U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
}
