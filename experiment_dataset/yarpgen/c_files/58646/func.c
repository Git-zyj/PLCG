/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58646
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] [i_1] = min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)164)), (3490460517U)))) ? (((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) 3490460512U)))) : (((((/* implicit */_Bool) var_2)) ? (var_5) : (var_5))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3490460508U)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (unsigned char)63)))) == (min((((/* implicit */int) (unsigned char)249)), (var_1)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        var_12 = ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (max((((/* implicit */unsigned int) ((_Bool) 1260846109))), (var_11))) : (((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)-51)) & (var_0)))))));
                        arr_13 [18] [i_3] |= ((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) -8766600807674439188LL)) || (((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((int) 1334413689U))) : (max((18446744073709551611ULL), (1272319264856619371ULL)))))));
                        var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) -1283487212)), (var_5)));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        var_14 += ((/* implicit */_Bool) (+(((/* implicit */int) ((18446744073709551599ULL) <= (((/* implicit */unsigned long long int) -954198154)))))));
                        arr_18 [i_0] [i_0] [i_2] [i_0] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((long long int) (+(var_3))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -7LL)) == (var_6)))) * (((/* implicit */int) ((unsigned char) var_8)))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_5 = 2; i_5 < 23; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) var_9)), (var_7))), (((/* implicit */unsigned int) ((int) 2434409875853173187ULL)))));
                        /* LoopSeq 3 */
                        for (int i_8 = 2; i_8 < 21; i_8 += 4) /* same iter space */
                        {
                            arr_28 [i_0] [i_5] [i_0] [i_0] [4U] [i_0] = ((/* implicit */int) (+(((long long int) ((((/* implicit */_Bool) var_11)) ? (16777215U) : (((/* implicit */unsigned int) -794436807)))))));
                            var_17 = ((/* implicit */long long int) max((max((max((((/* implicit */unsigned long long int) (_Bool)1)), (72057594037927935ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))), (((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)255)), (var_8)))) & (((var_5) + (((/* implicit */unsigned long long int) var_11))))))));
                            arr_29 [i_0] [i_6] [i_5] [i_0] = ((/* implicit */unsigned int) ((max((6641052022242937614LL), (((/* implicit */long long int) 2922404551U)))) << (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_3)) : (var_5))) - (7986186682326405094ULL)))));
                        }
                        for (int i_9 = 2; i_9 < 21; i_9 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) var_9))))), (max((var_5), (((/* implicit */unsigned long long int) var_8))))));
                            var_19 = ((/* implicit */unsigned long long int) 2157872921U);
                            var_20 = ((/* implicit */unsigned char) max(((+(((((/* implicit */unsigned long long int) var_7)) + (13868579580267429840ULL))))), (((/* implicit */unsigned long long int) ((signed char) -55996429)))));
                            var_21 = ((((17011840239416843786ULL) > (((/* implicit */unsigned long long int) 0)))) ? (var_5) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_11) : (var_4)))), (min((var_3), (-2721943540393399422LL)))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            var_22 += ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-2721943540393399434LL))) ? (((((/* implicit */_Bool) 562949953421311LL)) ? (var_11) : (2866394791U))) : (((3490460507U) ^ (var_4)))));
                            var_23 = ((/* implicit */_Bool) ((var_1) & (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_7)), (9470371063054674593ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)155), (var_2))))))))));
                        }
                    }
                } 
            } 
        } 
        arr_36 [(unsigned char)24] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_11)))) ? (((((/* implicit */_Bool) -5251236245678191856LL)) ? (794436807) : (((/* implicit */int) var_2)))) : (((int) var_7))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (((unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((var_4), (var_7))) > (max((((/* implicit */unsigned int) var_1)), (var_11)))))))));
    }
    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
    {
        var_24 *= ((/* implicit */unsigned char) (-((-(((/* implicit */int) ((18446744073709551615ULL) >= (var_6))))))));
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (~((~(2888244649U))))))));
        arr_40 [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 99032843)) : (var_6))) % (((/* implicit */unsigned long long int) ((int) (+(var_4)))))));
    }
    var_26 = ((/* implicit */unsigned long long int) (((-(max((var_3), (((/* implicit */long long int) var_8)))))) == (((/* implicit */long long int) var_8))));
    var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(var_7)))) < (((6890646861656948522ULL) * (((/* implicit */unsigned long long int) var_1)))))))) % ((-(((unsigned long long int) var_11))))));
    var_28 &= ((/* implicit */long long int) max((((((3049084910U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))))) | (max((((/* implicit */unsigned int) var_0)), (3490460517U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4215312556U)))))));
}
