/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94937
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) ((int) (unsigned char)255));
                            var_14 = ((/* implicit */unsigned char) max((((/* implicit */signed char) (!((!(var_7)))))), (var_11)));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */int) min((arr_1 [i_1]), (((/* implicit */unsigned char) (signed char)-28))))) - (((/* implicit */int) arr_2 [18LL] [i_0] [i_1]))))));
                arr_8 [i_0] = ((/* implicit */unsigned short) min((min((min((2927388974626053198LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))))), (max((((/* implicit */long long int) var_6)), (max((var_8), (-2927388974626053206LL)))))));
                var_16 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 1030792151040ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (min((18446743042917400553ULL), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */short) var_12)), (arr_0 [i_0] [i_0])))), (739264832818026154LL))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_8);
}
