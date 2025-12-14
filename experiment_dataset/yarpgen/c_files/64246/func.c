/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64246
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = var_8;
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 9; i_2 += 4) 
            {
                {
                    var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)134)) && (((/* implicit */_Bool) var_0))))), ((unsigned char)134)))) ? (((long long int) max((arr_4 [(unsigned short)5] [5ULL] [i_2]), (((/* implicit */unsigned long long int) (unsigned char)122))))) : (((/* implicit */long long int) ((/* implicit */int) max((((unsigned short) -663574753247131509LL)), (((/* implicit */unsigned short) ((var_5) && (arr_0 [i_0]))))))))));
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) (short)(-32767 - 1))) <= (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))))))))));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 193467650294938324ULL)) ? (14458434393053363204ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6121889284022210685LL))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            var_15 = -663574753247131520LL;
            arr_9 [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3757854020529408381ULL)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) (unsigned char)40))))))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(short)10] [(unsigned char)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15))) : (3757854020529408361ULL)))) || (((var_5) || (var_6)))))));
        }
    }
    var_16 = ((/* implicit */_Bool) min((var_16), (((_Bool) ((((/* implicit */_Bool) (short)1628)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) (unsigned char)53)))))));
    var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)22588)) : (((/* implicit */int) (unsigned char)216))))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_3))));
    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
}
