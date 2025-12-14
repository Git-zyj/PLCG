/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93088
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) min((((/* implicit */short) ((33554431) != (((/* implicit */int) (unsigned char)93))))), ((short)-24822))))));
    var_13 = ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-32758)) : (var_1))))) : (((/* implicit */int) var_10)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_6 [i_2 + 1] [i_2]), (arr_6 [i_2 - 1] [i_2])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) var_4))))) : (((arr_7 [i_2 - 1]) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) arr_3 [i_2 - 3] [i_1]))))))) % (((/* implicit */int) var_5))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((-575513565) + (((/* implicit */int) (unsigned short)19323))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_1 [i_3])), (((((/* implicit */int) arr_10 [i_5])) & (((/* implicit */int) var_5))))))) % (min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_3] [i_3]))))), (((((/* implicit */_Bool) 746340887)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_3])))))))));
                }
            } 
        } 
    } 
}
