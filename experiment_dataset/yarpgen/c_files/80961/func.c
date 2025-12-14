/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80961
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
    var_15 = ((/* implicit */unsigned char) (((-(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-27)), (var_7)))))) * (((/* implicit */int) (signed char)27))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) (signed char)-13))))), (722425685U))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((signed char) (signed char)126))), (13396621816668683079ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) + (3572541610U))))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((3572541599U) / (3956158684U)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-27)), (arr_0 [i_4] [i_0]))))));
                            var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)32))));
                        }
                        var_20 = var_8;
                        var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (3230096234U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)137))))) : (var_1)));
                    }
                }
            } 
        } 
    } 
    var_22 -= ((/* implicit */unsigned char) (-((-((+(((/* implicit */int) (signed char)15))))))));
    var_23 = ((/* implicit */unsigned char) (+(min((var_1), (((((/* implicit */_Bool) 9ULL)) ? (460965959313285518ULL) : (((/* implicit */unsigned long long int) 3572541610U))))))));
    var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 460965959313285518ULL))) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) var_14))));
}
