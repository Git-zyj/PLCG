/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57689
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!((!((!(var_13))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) arr_0 [i_0])))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) (+((-((+(-866637322)))))));
                                arr_11 [i_1] = ((/* implicit */_Bool) (+((+((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [8ULL] [i_0] [i_0 - 1]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 *= ((/* implicit */long long int) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 2; i_5 < 22; i_5 += 1) 
    {
        for (unsigned char i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (~((+((+(((/* implicit */int) (signed char)-7)))))))))));
                arr_16 [(signed char)4] [i_6] = ((/* implicit */unsigned short) (+((-((~(((/* implicit */int) (signed char)-8))))))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~((+((+(((/* implicit */int) (unsigned char)71)))))))))));
                            arr_24 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (+((+(4481777286021758721LL)))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_15 [i_5]))))))))))));
            }
        } 
    } 
}
