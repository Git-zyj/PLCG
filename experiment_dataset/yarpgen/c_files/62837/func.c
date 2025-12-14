/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62837
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) min((1870126827), (var_7)))) || (((/* implicit */_Bool) var_16))))) % (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((var_7) / (((/* implicit */int) var_6))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) arr_4 [i_3] [11ULL]);
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+((+(-1870126816)))))) == (max((((long long int) arr_7 [i_3] [17] [i_1] [i_1] [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))))));
                            arr_10 [i_2] [i_2] [i_2] [(unsigned char)17] [(unsigned char)17] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) -7106217572745367912LL)) < (9830121704347528697ULL)))), (((((var_15) + (2147483647))) << (((((arr_1 [i_0]) + (1419606451))) - (6)))))))) ? (var_7) : (((/* implicit */int) var_11))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((max((arr_7 [(unsigned char)12] [i_1] [i_1] [7] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_6 [i_1] [i_0] [i_0]), (arr_6 [i_0] [i_1] [i_1])))))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_1])), (var_19)))) > (((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned short)0]))));
            }
        } 
    } 
    var_25 = ((long long int) var_1);
}
