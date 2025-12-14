/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66274
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)5781)) ? (((8191LL) | (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)0), ((_Bool)1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8167LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)119))))) ? (((/* implicit */int) (unsigned short)55049)) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (_Bool)1)))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) -1405137132);
                            var_12 ^= ((/* implicit */long long int) (unsigned short)0);
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) var_6);
    var_14 = ((/* implicit */_Bool) -5084689231202021576LL);
    var_15 = ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) ((int) (unsigned short)62551)))), (((((/* implicit */int) var_1)) & (((/* implicit */int) max((var_6), (((/* implicit */signed char) (_Bool)1)))))))));
}
