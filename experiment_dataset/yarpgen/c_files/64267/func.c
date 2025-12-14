/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64267
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_14)), (11236840332794494399ULL))), (((/* implicit */unsigned long long int) ((short) (short)-26742)))))) ? (((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_10))))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)44), (((/* implicit */unsigned char) var_2)))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (7209903740915057214ULL)))) ? (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])) : (var_8)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_16 = ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) arr_10 [i_0] [i_1 - 2] [i_2 - 1] [i_0] [i_4 + 1] [i_2 - 1]))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 2] [i_2] [i_3] [i_2] [i_3 - 3])) ? (((/* implicit */int) arr_10 [i_0] [i_1 - 1] [(signed char)9] [i_2 - 1] [i_4] [i_1 - 1])) : (((/* implicit */int) arr_10 [i_0 + 1] [i_1 - 1] [6] [i_3] [i_4 - 1] [(signed char)5])))));
                                var_17 = ((/* implicit */unsigned short) (~(((int) -1274994816))));
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((-6512228846854518004LL) + (((/* implicit */long long int) ((/* implicit */int) var_1)))))), (min((((/* implicit */unsigned long long int) var_4)), (var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32303))))))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        {
                            arr_21 [5LL] [i_5] = ((/* implicit */unsigned short) arr_6 [i_0] [8] [i_6]);
                            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [i_5]))));
                            var_20 = ((/* implicit */unsigned long long int) var_5);
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (arr_5 [i_0] [i_0]) : (var_9)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0 - 1]))) : (((var_6) / (((/* implicit */unsigned long long int) 34627159U)))))) : (((/* implicit */unsigned long long int) var_0))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                {
                    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 11010897251305478512ULL))));
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 23; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) ((int) var_8));
                                var_24 = ((/* implicit */_Bool) ((unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 564618364)) : (var_9))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
