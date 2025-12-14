/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9920
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1 + 3] = (((((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? ((~(var_3))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4605099073563539166LL)))))))) << ((((-(max((arr_1 [i_1]), (((/* implicit */int) arr_0 [i_0])))))) + (16))));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */int) var_7)) + ((~(((/* implicit */int) arr_3 [i_0] [i_1 - 2])))))))));
                var_16 = ((/* implicit */int) arr_2 [i_1 - 2] [i_1]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_17 = 4605099073563539166LL;
            arr_12 [i_2 + 1] [i_3] = ((/* implicit */unsigned short) min((-6750855426226027364LL), (-4605099073563539158LL)));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 3) 
        {
            arr_17 [i_2 + 1] &= ((/* implicit */_Bool) arr_13 [i_4 - 1] [i_2]);
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (var_3) : (4605099073563539178LL)));
            var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2]))) >= (var_9)))) ^ (arr_1 [i_2 + 1])));
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_2 - 1])) ? (arr_16 [i_2 - 1]) : (arr_16 [i_2 + 1]))))));
        }
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -6750855426226027362LL)) ? (((/* implicit */unsigned long long int) -1155067284)) : (13469744277958024334ULL)));
        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) (~(691891179)))) ? (3ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))) >= (((/* implicit */unsigned long long int) 594696882))));
        var_23 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) <= (((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)176)))))))));
        arr_18 [i_2] [i_2 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (((/* implicit */int) ((signed char) arr_7 [i_2 - 1]))) : ((-(((/* implicit */int) arr_7 [i_2 - 1]))))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 3) 
    {
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)67)))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) var_12)))), (((_Bool) arr_10 [i_5] [i_5]))))) : (((((/* implicit */_Bool) (+(arr_16 [i_5 + 3])))) ? ((+(2014388350))) : (((((/* implicit */int) var_4)) + (((/* implicit */int) var_5)))))))))));
        /* LoopNest 2 */
        for (long long int i_6 = 2; i_6 < 11; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                {
                    var_25 = ((/* implicit */signed char) (~(((((/* implicit */int) (short)-217)) & (((/* implicit */int) var_5))))));
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5] [i_5])) ? (((/* implicit */int) arr_9 [i_7])) : (1155067288)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_5 + 1] [i_5] [i_7])))))) : (((long long int) var_1))))) ? (((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */long long int) (+(1155067302)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5 + 1] [i_6]))) : (arr_20 [i_5]))))) : (((((/* implicit */_Bool) 3435366064U)) ? (((((/* implicit */_Bool) (unsigned char)198)) ? (var_3) : (((/* implicit */long long int) arr_2 [i_7] [i_6 - 1])))) : (((/* implicit */long long int) (-(var_0))))))));
                    arr_25 [i_5] [i_6] [i_5] = (-(((/* implicit */int) ((unsigned short) (+(var_0))))));
                    var_27 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-123)), (var_10)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_5 + 1] [i_5 + 3] [i_5 + 1])) ? (arr_4 [i_5 + 2] [i_5 + 1] [i_5 + 3]) : (arr_4 [i_5 - 1] [i_5 + 1] [i_5 + 1])))) : ((+(4605099073563539158LL)))));
                }
            } 
        } 
        var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_23 [i_5 - 1])) : (((/* implicit */int) arr_23 [i_5 + 1])))) + (((/* implicit */int) min((var_2), (((/* implicit */short) arr_23 [i_5 + 1])))))));
        var_29 = ((/* implicit */_Bool) ((min((4494335597154889480LL), (((/* implicit */long long int) arr_2 [i_5 + 2] [i_5 + 2])))) % (((/* implicit */long long int) 2787964225U))));
    }
}
