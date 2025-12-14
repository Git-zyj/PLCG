/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60069
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) + (min((var_1), (((/* implicit */unsigned int) var_6))))))) : (min((((/* implicit */long long int) min((var_8), (((/* implicit */unsigned short) var_12))))), (var_2)))));
    var_17 = ((/* implicit */signed char) (unsigned short)65504);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_9 [i_0 - 1] [i_1] [i_4] [i_4] [i_4] [i_4]), (((((/* implicit */_Bool) 29360128)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((((((/* implicit */_Bool) (short)1012)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3] [i_3] [i_3] [i_3]))) : (arr_4 [i_4]))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)74)), (((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4] [i_0] [i_4])) ? (((/* implicit */int) (short)-24454)) : (-1066253106))))))));
                                arr_13 [4U] [i_0] [i_3] = ((/* implicit */signed char) min((((/* implicit */long long int) min((((((/* implicit */_Bool) -741516054)) ? (((/* implicit */int) (short)4789)) : (1066253110))), (min((1066253100), (-354440425)))))), ((-(min((arr_7 [i_0] [i_1] [i_2] [i_0] [i_4]), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_1] [(signed char)3] [(_Bool)1] [(_Bool)1]))))))));
                            }
                        } 
                    } 
                    var_18 = 1733008458754221947LL;
                    arr_14 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1000)) ? (741516053) : (-1066253089)))) && (((/* implicit */_Bool) (+(var_0)))))) ? (((((/* implicit */_Bool) (signed char)-102)) ? (405023866077209906LL) : (((/* implicit */long long int) 618941235)))) : (min((((/* implicit */long long int) var_12)), (min((((/* implicit */long long int) (unsigned char)233)), (var_10)))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_1] [i_1]), (var_7)))) ? (min((((/* implicit */unsigned int) (unsigned char)255)), (arr_4 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_2] [11LL] [11LL])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)183))))) ? (min((3098552597485031666LL), (((/* implicit */long long int) (_Bool)1)))) : (var_10)))));
                }
            } 
        } 
    } 
}
