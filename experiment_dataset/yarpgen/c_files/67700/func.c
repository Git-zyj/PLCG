/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67700
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
    var_14 = ((/* implicit */short) ((5195295398820644332ULL) >> (((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (var_12) : (13835058055282163712ULL))))) + (38)))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)119)) ? (3758096384U) : (((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)29)) / (((/* implicit */int) (unsigned short)127)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) 1617264384285614395LL)) ^ (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_0])) && (((/* implicit */_Bool) 10826809204129087117ULL)))))));
                arr_4 [i_1] = ((/* implicit */unsigned long long int) var_1);
                arr_5 [i_0] [i_0] [i_1 - 3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)29)), (arr_0 [i_1 - 3])))), (((unsigned long long int) (short)62))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_17 |= ((/* implicit */unsigned short) ((int) ((((/* implicit */int) (unsigned char)120)) << (((262136U) - (262123U))))));
                            arr_13 [i_2] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)12))))), (11880375477809577243ULL)));
                            arr_14 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_3] [i_3] [6LL] [i_3])) == (((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_2] [i_2] [i_3])))))) != ((-(6566368595899974373ULL))))) ? (((-1617264384285614396LL) | (arr_12 [i_1 - 4] [i_1 + 1] [i_1] [i_1 + 1]))) : (((/* implicit */long long int) ((((int) (unsigned char)108)) ^ (((/* implicit */int) ((_Bool) (signed char)56))))))));
                            arr_15 [i_2] = ((/* implicit */unsigned short) ((var_9) ? (((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 2])) ? (arr_8 [i_1 - 3] [i_1 - 1] [i_1 - 4] [i_1 - 2]) : (arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 3] [i_1 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_10 [i_2] [i_2]))) <= (((int) (signed char)119))))))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_0 [i_1 + 1]), (arr_0 [i_1 - 1])))) << (((((((arr_11 [i_1] [i_3]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))))) ? (((/* implicit */int) (signed char)31)) : (((((/* implicit */int) arr_10 [i_2] [i_1 + 1])) << (((var_7) - (8543026588136908106ULL))))))) - (18)))));
                        }
                    } 
                } 
                var_19 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((-1617264384285614395LL) & (arr_12 [i_1] [i_0] [i_1] [i_1])))) ? (((/* implicit */int) ((unsigned char) var_7))) : ((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min(((+(-8687199972134873903LL))), (((((/* implicit */_Bool) 262136U)) ? (-7830905613335956000LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29)))))))) ^ (12417696153090814746ULL)));
}
