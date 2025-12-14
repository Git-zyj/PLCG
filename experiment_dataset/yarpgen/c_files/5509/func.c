/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5509
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
    var_13 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((137791916635250142ULL), (((/* implicit */unsigned long long int) (unsigned short)14829))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((-(3704575824U))))), ((~((~(590391472U)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) ((unsigned char) 3704575824U)))));
                                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) -744693900775205619LL);
                                var_15 |= ((/* implicit */long long int) arr_10 [(_Bool)1] [i_2] [i_0] [i_2] [i_0] [i_0] [i_0]);
                                arr_12 [i_0] [i_0] [(signed char)13] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((3704575824U) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3714634229622587517LL))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) 3145952994U))) <= (((/* implicit */int) arr_0 [i_0])))))) : ((+(35184237871104LL))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */short) arr_8 [i_1] [i_1] [i_0] [i_1] [i_0]);
            }
        } 
    } 
    var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (3145952994U) : (((/* implicit */unsigned int) var_8))));
    var_18 = ((/* implicit */unsigned char) ((signed char) var_2));
}
