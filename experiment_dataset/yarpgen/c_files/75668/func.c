/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75668
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                var_11 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) (unsigned char)144))))), (arr_1 [i_0 - 1])))) ? (min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) min((-1886864253), (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((0U), (arr_1 [i_0])))) ? (((/* implicit */int) var_4)) : (min((1886864270), (-1886864253))))))));
                var_12 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_3 [i_0] [i_1])), (((long long int) (!(((/* implicit */_Bool) (unsigned char)156)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_13 -= ((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)86))) & (621363021U))), (((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_2]))));
                            var_14 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1470027699868151181LL)) ? (518897078U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32007)))))) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) min(((short)32767), ((short)-32759)))))), (((/* implicit */int) ((unsigned char) 11973267374855160763ULL)))));
                            var_15 = ((/* implicit */signed char) min((((unsigned short) var_0)), (((/* implicit */unsigned short) (signed char)-85))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) 11973267374855160763ULL)) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (((var_9) & (((/* implicit */int) (signed char)39))))))) : (min((((/* implicit */unsigned int) (unsigned char)157)), (3293378491U))));
    var_17 = ((/* implicit */_Bool) (+(var_1)));
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            for (signed char i_6 = 2; i_6 < 11; i_6 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) min((var_18), ((~(((((/* implicit */_Bool) 1001588793U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (1796135552U)))))));
                    var_19 = ((/* implicit */signed char) min((var_19), (arr_6 [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 1] [i_5] [i_6])));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_8 = 1; i_8 < 11; i_8 += 1) 
        {
            var_20 *= ((/* implicit */signed char) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_0))));
            var_21 = ((/* implicit */unsigned short) var_9);
            var_22 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_8 + 1] [2U] [i_8 - 1] [i_8] [16LL] [i_8 + 4]))));
            arr_20 [i_8] [i_8] = ((/* implicit */unsigned int) ((unsigned short) (unsigned char)98));
        }
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)44966)))) % (((/* implicit */int) min((((/* implicit */short) arr_0 [i_7])), ((short)32763))))))) ? (min((((/* implicit */int) arr_4 [i_7] [i_7] [i_7])), (((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)187)))))) : ((-(((((/* implicit */int) (signed char)-51)) | (((/* implicit */int) (short)10127))))))));
        var_24 -= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) min(((short)-10125), (((/* implicit */short) (unsigned char)91))))), (((((/* implicit */_Bool) -4991417264303700507LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))) : (15543895830966727122ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252)))));
        var_25 = ((/* implicit */signed char) (unsigned short)20570);
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 13; i_9 += 1) 
    {
        arr_25 [i_9] [i_9 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_18 [i_9 - 2]))));
        var_26 = ((/* implicit */int) (unsigned char)202);
    }
}
