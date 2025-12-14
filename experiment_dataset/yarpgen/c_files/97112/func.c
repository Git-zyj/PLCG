/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97112
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
    var_10 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned char)54)) ? (((-734748855364512041LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)148))))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) (unsigned char)54)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)117)), ((unsigned short)15911)))) - (15889)))))) ? (((/* implicit */long long int) 1796566649)) : ((+(max((((/* implicit */long long int) (unsigned short)53630)), (9223372036854775807LL)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 20; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)20)), (arr_0 [i_0])))) ? (arr_3 [i_0 + 3] [i_0 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9))))))));
                            var_12 = (unsigned char)190;
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) var_1);
}
