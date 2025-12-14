/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94358
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_4 [i_2] [i_1] [i_0])))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */_Bool) -215282511);
                    arr_10 [i_0] [i_1] [7U] [i_1] = ((/* implicit */unsigned long long int) (~(3905482070302948292LL)));
                }
                var_12 = ((/* implicit */int) min(((short)-30904), (((/* implicit */short) (signed char)-73))));
                var_13 -= ((/* implicit */short) ((var_2) ^ (((((/* implicit */_Bool) arr_1 [(_Bool)1] [4LL])) ? (((((/* implicit */_Bool) (unsigned short)26301)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_8)))) : (((-79335070) + (215282510)))))));
                var_14 -= ((/* implicit */signed char) 7382384737229594689LL);
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) ((short) arr_4 [(signed char)10] [i_1] [(unsigned short)13]))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-76))) / (3163640929057584405LL))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1] [i_1]))))) ? ((~(215282497))) : (((/* implicit */int) (unsigned short)19564)))))));
            }
        } 
    } 
    var_15 += ((/* implicit */unsigned long long int) -2000955287);
    var_16 = ((/* implicit */short) (+(min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) (short)18441)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (3905482070302948289LL)))))));
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        for (int i_4 = 2; i_4 < 15; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_21 [i_3] [i_5] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) ((_Bool) (_Bool)1))) > (((/* implicit */int) arr_20 [i_3] [i_4 - 2] [i_5]))))), (((int) arr_6 [i_4 - 1] [i_4 + 2]))));
                    arr_22 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1890735178)) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) (short)-20532))))))) ? (((/* implicit */unsigned long long int) -215282511)) : ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))) - (var_1)))))));
                }
            } 
        } 
    } 
}
