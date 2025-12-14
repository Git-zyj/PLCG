/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74076
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
    var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (max((((/* implicit */long long int) -98837113)), (4914003291787004307LL)))));
    var_16 = ((/* implicit */unsigned short) ((unsigned int) (-((-(((/* implicit */int) var_4)))))));
    var_17 += ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_3 [i_0] [i_0] [i_0]) : ((+(arr_3 [i_0] [i_0] [i_1])))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 8; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_9 [i_2] = ((/* implicit */long long int) ((_Bool) ((var_9) != (((/* implicit */unsigned int) arr_8 [i_2 + 2] [i_2] [i_2] [i_2 + 2])))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)219)) ? (max((arr_6 [i_2 + 2] [i_2 + 1] [i_2]), (arr_6 [i_2 + 1] [i_2 - 1] [i_1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (((/* implicit */int) (unsigned char)9))))) ? (((/* implicit */long long int) (-(98837113)))) : (arr_3 [0] [i_2 + 2] [i_2])))));
                            arr_10 [8] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [(_Bool)1])) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (arr_3 [i_0] [i_2] [i_3]) : (((/* implicit */long long int) (~(var_6)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [(unsigned char)6])) % (((/* implicit */int) arr_4 [i_0] [i_2]))))) ? (min((-98837114), (((/* implicit */int) (unsigned char)13)))) : (((/* implicit */int) arr_0 [i_3] [i_2 + 2])))))));
                            var_20 = var_4;
                            arr_11 [i_3] [(_Bool)1] [i_0] [i_0] [i_3] &= ((/* implicit */unsigned long long int) -98837113);
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((unsigned char) min(((short)(-32767 - 1)), (((/* implicit */short) ((98837113) <= (((/* implicit */int) arr_1 [i_1] [i_0])))))))))));
                var_22 = ((/* implicit */unsigned char) 1806931854U);
            }
        } 
    } 
    var_23 = ((((/* implicit */_Bool) max((min((402109357U), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) var_3))))) ? (max(((~(((/* implicit */int) (short)32767)))), (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (var_9))))))));
}
