/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86678
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [1LL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)6173)) >> (((17877705802456119129ULL) - (17877705802456119117ULL)))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-6077015724953305503LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)40)))))));
                    var_18 = ((/* implicit */int) ((unsigned short) (+(((((/* implicit */_Bool) (unsigned char)252)) ? (-972027423) : (((/* implicit */int) (unsigned char)120)))))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((4136127978330689368LL) << (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-2867))) + (1125899906842624LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-2))))))))));
                }
            } 
        } 
    } 
    var_20 = (!(((/* implicit */_Bool) var_15)));
    var_21 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (long long int i_3 = 3; i_3 < 13; i_3 += 3) 
    {
        for (long long int i_4 = 2; i_4 < 10; i_4 += 1) 
        {
            {
                arr_14 [i_4] |= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)57))) < (2701854104351490017LL)))) != (((((/* implicit */_Bool) 4235780610U)) ? (524224) : (((/* implicit */int) (unsigned char)255))))));
                var_22 = ((/* implicit */signed char) -7228222427475774381LL);
                /* LoopNest 2 */
                for (short i_5 = 1; i_5 < 10; i_5 += 3) 
                {
                    for (unsigned char i_6 = 1; i_6 < 13; i_6 += 1) 
                    {
                        {
                            var_23 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)14)) ? (min((9223372036854775807LL), (((/* implicit */long long int) (signed char)-120)))) : (((/* implicit */long long int) (+(896535604))))));
                            var_24 = ((/* implicit */int) max((max((((-2639790851956983975LL) + (((/* implicit */long long int) 524224)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)20354)) ? (-524225) : (((/* implicit */int) (unsigned char)0))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-120)) || (((/* implicit */_Bool) (unsigned short)20369)))))));
                            var_25 = ((/* implicit */long long int) (+(((int) -2521629854396856078LL))));
                        }
                    } 
                } 
            }
        } 
    } 
}
