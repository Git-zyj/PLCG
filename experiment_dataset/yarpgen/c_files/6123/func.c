/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6123
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
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (_Bool)1))))));
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_0]);
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 4; i_3 < 22; i_3 += 4) 
        {
            for (long long int i_4 = 1; i_4 < 23; i_4 += 1) 
            {
                {
                    arr_16 [i_4] [i_4] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2576043978U)))))));
                    arr_17 [i_4] = ((/* implicit */unsigned char) (+(((int) (unsigned char)11))));
                }
            } 
        } 
        var_13 = ((/* implicit */long long int) (+(arr_13 [i_2] [i_2])));
        var_14 = ((/* implicit */signed char) var_2);
        arr_18 [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_10 [i_2] [i_2])))) * ((+(((/* implicit */int) (unsigned char)209))))));
    }
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
    {
        var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_9 [i_5])))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */long long int) 2147483647)) : ((-9223372036854775807LL - 1LL)))))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)34))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2)) ? (3354756194U) : (((/* implicit */unsigned int) 817237821))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((~(1718923310U))))))))));
        var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */int) (unsigned char)51)), ((-2147483647 - 1))))), (((((/* implicit */_Bool) (signed char)61)) ? (-6562727560667172270LL) : (((/* implicit */long long int) ((/* implicit */int) (short)16384)))))));
    }
    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
    {
        arr_25 [6LL] [i_6] = max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6]))) == (2107020754U)))), (((((/* implicit */int) (unsigned short)23303)) << (0ULL))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) (signed char)-109))))) ? (max(((+(((/* implicit */int) (unsigned char)229)))), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136))) / (2107020754U)))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max(((short)-18573), (((/* implicit */short) (signed char)(-127 - 1))))))));
    }
    var_20 = ((/* implicit */unsigned short) (!(((4194303U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)109)))))));
}
