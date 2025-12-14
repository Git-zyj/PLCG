/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63107
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
    var_13 = ((((/* implicit */int) var_8)) * (((((/* implicit */int) var_8)) >> (((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_4))))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))))) * (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) ((max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-69)))) | ((-(((/* implicit */int) (signed char)0))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-80))))), (((((long long int) (signed char)31)) | (var_0)))));
                                arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (((-(7109814419523663611LL))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)18947), (var_5))))))))));
                                var_16 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 2; i_6 < 11; i_6 += 3) 
                    {
                        {
                            var_17 ^= ((((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))))), (min((((/* implicit */signed char) (_Bool)0)), ((signed char)3)))))) | ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_6 + 1])) : (((/* implicit */int) min((var_11), ((signed char)5)))))));
                            var_18 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (_Bool)1))) * (((/* implicit */int) (signed char)-5))));
                            var_19 = ((/* implicit */long long int) (~((+(((((/* implicit */_Bool) arr_23 [(signed char)13] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)18947)) : (-2147483645)))))));
                            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((long long int) var_3)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_3)) < (((/* implicit */int) (_Bool)0)))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (max((((/* implicit */int) ((((/* implicit */_Bool) (signed char)23)) && ((_Bool)0)))), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) var_6)))), ((!(((/* implicit */_Bool) var_1))))))) : (((((/* implicit */int) var_5)) + (((/* implicit */int) (_Bool)1))))));
}
