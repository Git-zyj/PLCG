/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65037
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((unsigned short) ((long long int) (unsigned short)0)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8782))) ^ (min((arr_2 [2ULL]), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_4 [i_0] [14ULL] [i_0] [i_0])) ^ (((/* implicit */int) arr_1 [(unsigned short)0])))))))));
                    arr_7 [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65513)))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)3)) : (arr_5 [i_0] [i_1] [i_2] [i_1])))) | (((((/* implicit */_Bool) 15093676431671586719ULL)) ? (4002120686794069465ULL) : (((/* implicit */unsigned long long int) -4742921617435223415LL))))))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) (signed char)11))))) > (((/* implicit */int) (unsigned short)0))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -4610093115099400009LL)) ? (4742921617435223414LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39395))))), ((+((+(-4742921617435223404LL)))))));
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_4 + 2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((int) var_9))) || (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_6 [i_2] [i_0] [i_0]))))))) + ((-(((/* implicit */int) (unsigned short)65525))))));
                                var_16 = ((unsigned short) ((arr_8 [i_4 - 1] [i_4 + 2]) / (arr_8 [i_4] [i_4 + 1])));
                                var_17 = ((/* implicit */long long int) ((min((min((((/* implicit */unsigned long long int) (signed char)-84)), (10998092758953084294ULL))), (((var_4) * (((/* implicit */unsigned long long int) var_8)))))) * (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */signed char) var_5);
}
