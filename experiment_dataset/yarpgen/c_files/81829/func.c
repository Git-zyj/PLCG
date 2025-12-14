/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81829
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
    var_18 = ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)160))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 7; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((unsigned char) ((((((/* implicit */int) (unsigned char)221)) % (((/* implicit */int) arr_0 [i_0])))) != (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)29)) && (((/* implicit */_Bool) arr_1 [i_1])))))));
                arr_5 [i_0] [i_0] [(unsigned char)10] = arr_3 [i_0] [i_1];
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((((/* implicit */int) arr_7 [i_3])) ^ (((/* implicit */int) (unsigned char)240)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)151)))))))))))));
                /* LoopNest 3 */
                for (unsigned char i_4 = 1; i_4 < 19; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) (unsigned char)226))));
                                arr_21 [i_4] [i_5] [i_4] [i_3] [i_2] [i_4] = ((unsigned char) (unsigned char)82);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    for (unsigned char i_8 = 1; i_8 < 21; i_8 += 1) 
                    {
                        {
                            arr_28 [i_8] [i_8] [i_8] [i_2] = arr_27 [i_8] [(unsigned char)14] [(unsigned char)14] [i_3] [i_2] [i_2];
                            arr_29 [i_8] [i_7] [i_3] [(unsigned char)15] [i_2] [i_8] = (unsigned char)174;
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)192)) == (((/* implicit */int) var_14))))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_2])) >= (((/* implicit */int) var_0)))))))) ? (((((/* implicit */_Bool) min(((unsigned char)157), (var_5)))) ? ((~(((/* implicit */int) (unsigned char)151)))) : (((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) arr_15 [i_3])) : (((/* implicit */int) arr_8 [i_3])))))) : ((~(((/* implicit */int) arr_15 [i_3]))))));
            }
        } 
    } 
}
