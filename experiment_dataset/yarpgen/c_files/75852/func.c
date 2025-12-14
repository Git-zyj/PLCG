/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75852
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
    var_11 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 7; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-53))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned char)3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 2] [i_2 + 2]))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [(signed char)3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)10] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)2] [(unsigned char)2] [(unsigned char)2]))) : (arr_0 [(unsigned char)6]))))))))));
                    var_13 = ((/* implicit */unsigned char) ((unsigned short) ((((unsigned int) arr_1 [i_0])) == (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(_Bool)1] [(signed char)8] [i_2 - 1]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 4; i_3 < 20; i_3 += 4) 
    {
        for (short i_4 = 1; i_4 < 22; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_3])))), (((/* implicit */int) ((short) (signed char)53))))))));
                    var_15 = ((/* implicit */unsigned char) arr_13 [i_4]);
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)3)) : (2147483647)))) <= (arr_9 [i_4 + 1] [i_4 + 1])));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)105)))) / (((/* implicit */int) min(((short)1023), (((/* implicit */short) (unsigned char)83)))))))) ? (min((((((/* implicit */_Bool) arr_13 [i_5])) ? (arr_9 [i_3] [(_Bool)1]) : (arr_13 [i_5]))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_9 [i_3] [i_3]))))) : (min((arr_13 [i_5]), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)118)))))))));
                }
            } 
        } 
    } 
}
