/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91772
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(max((((((/* implicit */int) var_2)) * (((/* implicit */int) var_2)))), (((((/* implicit */int) (short)-1389)) / (((/* implicit */int) var_8)))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [(short)7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (arr_8 [i_1 - 1] [i_2] [i_3 - 2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112))))) > (((((/* implicit */_Bool) arr_8 [i_1 - 2] [10ULL] [i_3 - 2] [i_3 + 1])) ? (arr_8 [i_1 - 3] [13ULL] [i_3 + 1] [i_3 + 1]) : (arr_8 [i_1 + 1] [i_2] [i_3 + 1] [(_Bool)1])))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)26)) : (121362021)))) ? ((~(arr_2 [8ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)126)) && (((/* implicit */_Bool) 121362021))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32736)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (short)32767))))) : (max(((~(var_0))), (((2623685899997308484ULL) / (17325511658497330739ULL)))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18112941406137421188ULL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(25165824)))) ? (((/* implicit */unsigned long long int) ((long long int) arr_3 [i_5] [6LL]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32750))) : (var_0))))))));
                            arr_19 [i_5] [i_5] [i_4] [i_5] &= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)156))));
                            arr_20 [(signed char)9] [i_0] [i_4] = ((/* implicit */long long int) (+(((((/* implicit */int) (unsigned short)65509)) - (((/* implicit */int) var_3))))));
                            arr_21 [i_0] [i_0] [i_4] [4] = ((/* implicit */unsigned short) (_Bool)1);
                            var_22 = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */unsigned long long int) var_6)) : (11ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_10)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 &= ((/* implicit */unsigned char) ((unsigned long long int) min(((~(8646911284551352320ULL))), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) 1518088661))))))));
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) -4157933520432279003LL)) ? (17753520286400185574ULL) : (((/* implicit */unsigned long long int) -25165825))));
}
