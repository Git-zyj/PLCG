/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57810
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) 8230869090693423115ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63819))) : (8230869090693423115ULL))) != ((~(var_2)))))) >= (((/* implicit */int) ((((/* implicit */_Bool) (~(8230869090693423115ULL)))) || (((/* implicit */_Bool) var_7)))))));
        arr_2 [i_0] [13U] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (var_0)))) ? ((~(var_8))) : (((/* implicit */long long int) (-(var_11))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        var_13 = ((/* implicit */signed char) ((unsigned char) arr_4 [i_1]));
        var_14 = ((/* implicit */int) 8230869090693423115ULL);
    }
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_0))));
    var_16 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) 871926333U)), (10215874983016128506ULL)))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 24; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (((+(min((((/* implicit */unsigned long long int) 1590512411)), (10215874983016128498ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((short) var_6)))))));
                var_18 += ((/* implicit */signed char) min(((~(arr_6 [i_3]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))));
                var_19 = ((/* implicit */unsigned short) arr_6 [(unsigned short)19]);
                var_20 = 1024068779128560432ULL;
            }
        } 
    } 
}
