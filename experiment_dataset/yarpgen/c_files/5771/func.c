/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5771
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
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) min((((/* implicit */unsigned long long int) (-((+(var_6)))))), (((unsigned long long int) var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((arr_3 [i_0]) == (arr_0 [i_1])))), ((~(2311752900324688622LL)))));
                                var_17 = ((/* implicit */long long int) (+(arr_5 [i_0] [i_0])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned char) (-(8ULL)));
                            arr_19 [(short)5] [1] [1] [(_Bool)1] [i_5] [(_Bool)1] = ((/* implicit */unsigned short) arr_5 [i_5] [i_6]);
                            arr_20 [i_0] [i_1] [i_6] &= ((/* implicit */unsigned char) (short)24396);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) max((arr_15 [i_1] [(unsigned short)4] [i_0] [(short)9] [(short)9]), (((/* implicit */int) (unsigned char)10))))) ? ((~(arr_7 [i_1] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_0] [6ULL] [(short)1]))))))));
                var_20 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                arr_21 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_1] [i_1] [i_0])), ((unsigned char)191))))))) || (((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) arr_6 [(unsigned char)6] [i_1]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) 11235538926227714519ULL);
}
