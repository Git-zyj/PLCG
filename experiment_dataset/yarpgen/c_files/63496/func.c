/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63496
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
    var_18 = var_4;
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)33)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((4398046511103ULL) + (4398046511103ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))) || (((/* implicit */_Bool) (-((-(((/* implicit */int) var_4)))))))));
                            arr_10 [i_0] [i_1] [(unsigned char)13] [(unsigned char)12] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)71))) - (11925653060733014651ULL))));
                            var_20 = ((unsigned char) ((unsigned char) (unsigned char)0));
                            var_21 += ((unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) var_7))))) * (var_9)));
                        }
                    } 
                } 
                arr_11 [(unsigned char)14] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_7))));
                var_22 = ((unsigned char) var_12);
            }
        } 
    } 
}
