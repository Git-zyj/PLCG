/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75696
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
    var_12 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
    var_13 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(13681743239299801505ULL))))));
        arr_3 [11] = ((/* implicit */unsigned char) max((((/* implicit */short) ((((((/* implicit */_Bool) 16777212)) ? (var_10) : (((/* implicit */long long int) 264241152)))) <= (((var_3) ? (var_9) : (arr_0 [i_0] [i_0])))))), (min((((/* implicit */short) var_2)), ((short)-1544)))));
        var_14 = ((/* implicit */signed char) ((arr_1 [i_0] [(signed char)13]) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)55769))) & (var_10)))) ? (((((/* implicit */_Bool) (unsigned short)55767)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))) : (((((/* implicit */int) (signed char)-115)) % (((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) (unsigned short)55758)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)9764)) > (((/* implicit */int) (unsigned short)55771))))) : (((/* implicit */int) (signed char)-112))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_3 = 1; i_3 < 24; i_3 += 2) 
                {
                    for (unsigned int i_4 = 3; i_4 < 22; i_4 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_5 = 1; i_5 < 22; i_5 += 4) 
                            {
                                arr_19 [i_1 + 1] [i_1 + 1] [12U] [i_1 + 1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_0);
                                arr_20 [i_5] [i_4 + 1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)55768)), (((max((((/* implicit */long long int) arr_10 [i_1 - 1] [i_1] [i_1])), (arr_4 [i_5]))) * (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))))));
                                arr_21 [i_5] [i_4] [i_1] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-20064)) ? (((/* implicit */int) (unsigned short)9752)) : (((/* implicit */int) (_Bool)1))))) >= (((((/* implicit */long long int) ((/* implicit */int) (short)856))) / (var_7)))));
                                var_15 = ((/* implicit */_Bool) max((var_15), (var_5)));
                            }
                            for (unsigned short i_6 = 1; i_6 < 23; i_6 += 3) 
                            {
                                arr_25 [i_1] [(signed char)14] [i_2 - 1] [i_3] [i_3] [i_4 - 2] [i_6] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)115))))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_10 [i_3 + 1] [i_3] [i_3 + 1])), (-264241154)))) : (((arr_4 [i_1 + 1]) & (arr_4 [i_1 + 2]))));
                                var_16 = ((/* implicit */_Bool) ((min((406116562507764653LL), (((/* implicit */long long int) max((-264241157), (((/* implicit */int) var_5))))))) << (((/* implicit */int) min((((/* implicit */unsigned char) ((-406116562507764653LL) != (var_1)))), (arr_24 [i_6 - 1] [i_6] [i_6 + 1] [i_4 + 3] [i_4 + 3] [(_Bool)1] [i_1 + 2]))))));
                                arr_26 [i_4] [i_4 - 3] [i_4] [(_Bool)1] [i_4 - 2] = ((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_3 - 1] [i_3 - 1] [(unsigned short)18]);
                            }
                            var_17 = ((/* implicit */long long int) arr_9 [i_1] [i_1] [i_1]);
                            arr_27 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (-(-4059044261179585065LL)));
                        }
                    } 
                } 
                arr_28 [i_1 + 1] [i_1] [i_2 - 1] = ((/* implicit */unsigned int) arr_10 [i_2 - 1] [i_2] [i_2 - 1]);
                arr_29 [i_1] [i_2 - 1] [(signed char)24] = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) (unsigned short)9767)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_2 - 1]))) : (((long long int) (unsigned short)47424)))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)96)), ((unsigned short)55758)))) : ((+(((/* implicit */int) var_3)))))))));
                var_18 += ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)55741), (((/* implicit */unsigned short) arr_22 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1]))) : (var_7)));
            }
        } 
    } 
}
