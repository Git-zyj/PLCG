/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87297
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
    var_13 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((var_11) & (((/* implicit */int) (unsigned short)11644))))))) ? (((/* implicit */int) ((unsigned short) min((var_6), (((/* implicit */int) var_1)))))) : ((~((+(7)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_14 &= ((/* implicit */signed char) ((((((/* implicit */long long int) var_2)) == (arr_10 [(signed char)10] [(signed char)10] [i_2] [i_3] [i_4] [i_3]))) ? (((/* implicit */int) ((_Bool) (unsigned short)53891))) : (((/* implicit */int) (((~(arr_9 [i_1] [i_1] [(unsigned char)10] [i_1] [i_1] [i_1]))) == (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                                var_15 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (~(var_5)))))));
                                var_16 += ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((_Bool) arr_6 [(unsigned char)16] [(_Bool)1] [i_2] [i_3])))))));
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (-(712411483831301702ULL))))));
                            }
                        } 
                    } 
                    var_18 = var_12;
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)53896), (((/* implicit */unsigned short) (signed char)-41))))) ? (var_7) : (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) (unsigned char)156)))))))))))));
}
