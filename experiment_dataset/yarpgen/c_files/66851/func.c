/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66851
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
    var_20 &= ((/* implicit */unsigned int) (short)5859);
    var_21 = ((int) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)5859))) * (var_8))), (max((var_5), (((/* implicit */unsigned int) (signed char)40))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_22 = ((/* implicit */signed char) (short)5859);
        var_23 = ((/* implicit */signed char) 268173312);
        arr_3 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (~(arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            for (unsigned int i_3 = 4; i_3 < 11; i_3 += 4) 
            {
                {
                    arr_11 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) arr_9 [i_3] [i_1] [i_1]);
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((((/* implicit */int) arr_9 [i_1] [i_3] [i_3 + 1])) < (((/* implicit */int) arr_10 [i_1] [i_2])))))))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 2; i_5 < 10; i_5 += 3) 
                        {
                            {
                                var_26 &= ((/* implicit */long long int) 687540166U);
                                var_27 = ((/* implicit */unsigned long long int) (short)-7567);
                                arr_19 [i_2] [i_1] [i_4] = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_8 [i_1] [(_Bool)1]))))));
                            }
                        } 
                    } 
                    arr_20 [i_1 - 1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) arr_9 [6ULL] [i_1] [(signed char)7])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    {
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) 285978576338026496LL)) & (7998198069168147067ULL))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 3; i_9 < 11; i_9 += 4) /* same iter space */
                        {
                            arr_32 [i_1] = (unsigned short)65535;
                            var_29 = ((/* implicit */short) (~(-5052167414058766832LL)));
                            var_30 = ((/* implicit */long long int) ((signed char) (-(1884171001096774648ULL))));
                            var_31 = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) (unsigned short)49338)))));
                        }
                        for (unsigned short i_10 = 3; i_10 < 11; i_10 += 4) /* same iter space */
                        {
                            var_32 = ((/* implicit */int) (+(((0U) * (0U)))));
                            var_33 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
                        }
                    }
                } 
            } 
        } 
        arr_35 [i_1] = ((/* implicit */signed char) ((int) ((short) (_Bool)1)));
    }
}
