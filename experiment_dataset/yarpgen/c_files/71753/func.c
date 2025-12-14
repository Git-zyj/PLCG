/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71753
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
    var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((var_0), (var_10)))) ? (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)13386)) ? (-1968177962265577372LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-15))))) | (((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (var_10))))))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (max((3354474490353309107ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? ((+(((/* implicit */int) arr_5 [i_0 - 1])))) : (((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */int) arr_7 [i_2 + 1] [i_1] [i_2 + 1])))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_7)))) : (((((/* implicit */_Bool) (unsigned short)65508)) ? (9223372036586340352ULL) : (((/* implicit */unsigned long long int) -1325866236))))))) ? (var_0) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))));
                        arr_13 [i_0] [6ULL] [i_0] [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_3)))))) : (var_9))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7)))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) arr_15 [i_0]);
                        var_20 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) var_6)) : (arr_4 [i_0 + 1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1438183179)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))) : (((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2] [i_2 + 1])) ? (arr_9 [i_2 + 1] [i_2 - 1] [13U] [i_2] [i_2] [i_2 - 1]) : (arr_9 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)41318)) ? (15092269583356242489ULL) : (8935082631799126073ULL))) ^ (((/* implicit */unsigned long long int) var_12)))))));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 4) 
        {
            {
                arr_25 [i_5] [i_6] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_6])) : ((-(((/* implicit */int) var_5)))))));
                var_22 = ((/* implicit */unsigned char) var_4);
                arr_26 [i_6] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_6])) && (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((unsigned char) var_2)))))));
                var_23 = ((/* implicit */unsigned char) var_11);
            }
        } 
    } 
}
