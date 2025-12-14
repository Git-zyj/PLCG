/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74874
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
    var_16 = ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) == (max((4193280U), (((/* implicit */unsigned int) (_Bool)1))))));
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (-(var_9))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)57462)) ^ (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)198)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), (max((((/* implicit */unsigned int) (unsigned short)8096)), (2638867834U)))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)60754)) | (((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) (signed char)-118)))))) ? (((/* implicit */int) (unsigned short)14358)) : (((/* implicit */int) (_Bool)1)))))));
                            var_21 = ((/* implicit */long long int) ((_Bool) ((int) 228729828)));
                        }
                    } 
                } 
                var_22 = var_8;
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)198))) / (2131657353U)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        for (int i_5 = 1; i_5 < 11; i_5 += 3) 
        {
            {
                var_24 = (unsigned short)57344;
                var_25 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_13 [i_4] [i_5 - 1]))) / (((/* implicit */int) (unsigned char)50))));
            }
        } 
    } 
    var_26 -= ((/* implicit */signed char) ((max(((!(((/* implicit */_Bool) var_12)))), (((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 1966080)))))) ? (((((((/* implicit */_Bool) (unsigned char)59)) && (((/* implicit */_Bool) 1611971395)))) ? (((((/* implicit */_Bool) 3938469299U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))) : (((var_2) / (((/* implicit */int) (unsigned short)10504)))))) : (((/* implicit */int) var_11))));
}
