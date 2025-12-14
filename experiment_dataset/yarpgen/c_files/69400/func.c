/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69400
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
    var_11 = ((/* implicit */_Bool) var_6);
    var_12 = ((/* implicit */unsigned int) ((((_Bool) (!(((/* implicit */_Bool) var_5))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((_Bool) 1638260359U)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) (((_Bool)1) ? (var_0) : (((/* implicit */int) (unsigned char)3))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (-877683106))) : (((((/* implicit */_Bool) 1752214080)) ? (((/* implicit */int) (signed char)-56)) : (var_2))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 3; i_3 < 11; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) ((((long long int) var_2)) ^ (((/* implicit */long long int) 1752214072))));
                            var_14 = ((/* implicit */signed char) (-2147483647 - 1));
                            arr_17 [i_0] [9ULL] [i_1] [i_3] [i_0] = ((/* implicit */int) var_10);
                        }
                    } 
                } 
            } 
            arr_18 [i_0] [8] [(signed char)8] = ((/* implicit */unsigned long long int) var_0);
            arr_19 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -988579809)) ? (((/* implicit */long long int) -1875941605)) : (-7773476833836604508LL)))) ? (((((/* implicit */_Bool) -877683106)) ? (((((/* implicit */int) var_10)) >> (((2147483647) - (2147483638))))) : (((/* implicit */int) var_4)))) : ((~(((((((/* implicit */int) var_5)) + (2147483647))) >> (((3702289907U) - (3702289900U)))))))));
            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((-427443445) + (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) % (-988579836)))) : (((long long int) 2377537053U))));
        }
    }
}
